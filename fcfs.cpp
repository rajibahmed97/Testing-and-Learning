#include<iostream>
#include<conio.h>
using namespace std;



class RAJIB_AHMED_FCFS
{
    public:
        void find_completion_time(int p[], int bt[], int ct[], int n)//to find completion time
        {
            ct[0] = 0;
            for(int i=1;i<=n;i++)
            {
                ct[i] = bt[i-1] + ct[i-1];
            }
        }


        void find_turn_around_time(int p[], int ct[], int at[], int tat[], int n)
        {
            cout<<"Turn Around Time is : ";
            for(int i=0;i<n;i++)
            {
                tat[i] = ct[i+1] - at[i];
                cout<<tat[i]<<" ";

            }
            cout<<"\n";
        }



        void find_waiting_time(int p[], int tat[], int bt[], int wt[], int n)
        {
            cout << "Waiting time is : ";
            for(int i=0;i<n;i++)
            {
                wt[i] = tat[i] - bt[i];
                cout<<wt[i]<<"  ";
            }
            cout<<"\n";
        }


        void find_gantt_chart(int p[], int ct[], int n)
        {
            cout<<"\nGantt chart is : \n";
            for(int i=0;i<n;i++)
            {
                cout<<"P"<<p[i]<<"\t";
            }
            cout<<"\n";
            for(int j=0;j<=n;j++)
            {
                cout<<ct[j]<<"\t";
            }
            cout<<"\n";
        }



        void fcfs_algorithm(int p[], int at[], int bt[], int n)
        {
            int ct[n],wt[n],tat[n];

            find_completion_time(p,bt,ct,n);
            find_turn_around_time(p,ct,at,tat,n);
            find_waiting_time(p,tat,bt,wt,n);
            find_gantt_chart(p,ct,n);


        }
};





int main()
{
    int total_rows;
    cout<< "Enter no of process : ";
    cin>> total_rows;

    int p[total_rows],at[total_rows],bt[total_rows];

    cout<<"Enter Process : ";
    for(int i=0; i<total_rows; i++)
    {
        cin>>p[i];
    }

    cout<<"Enter Arrival Time : ";
    for(int j=0; j<total_rows; j++)
    {
        cin>>at[j];
    }

    cout<<"Enter Brust Time : ";
    for(int k=0; k<total_rows; k++)
    {
        cin>>bt[k];
    }

    int n = sizeof(p) / sizeof(p[0]);
    RAJIB_AHMED_FCFS one;


    one.fcfs_algorithm(p,at,bt,n);



    getch();
}

