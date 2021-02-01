class Stack:
    def __init__(self):
        self.stack=[]
    def push(self,data):
        return self.stack.append(data)
    def pop(self):
        return self.stack.pop()
    def size(self):
        return len(self.stack)
    def isEmpty(self):
        return self.stack==[]
    def peek(self):
        return self.stack[len(self.stack)-1]


def balance_test(input_string):
    s = Stack()
    balance = True
    index = 0
    
    while index < len(input_string) and balance:
        symbol = input_string[index]
        if symbol in '([{':
            s.push(symbol)
        else:
            if s.isEmpty():
                balance = False
            else:
                top = s.pop()
                if not matches(top,symbol):
                    balance = False
                
                
        index = index + 1
    
    if balance and s.isEmpty():
        return True
    else:
        return False

    
def matches(open,close):
    opens = '([{'
    closers = ')]}'
    return opens.index(open) == closers.index(close)
        
        
print(balance_test('{({([][])}())}'))
print(balance_test('{({([][])}()}'))



