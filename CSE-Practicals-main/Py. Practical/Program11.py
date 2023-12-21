class Reverse:
    def rs(self, string):
        words = string.split(' ')
        reversed_string = ''.join(reversed(words))
        print(reversed_string)

obj = Reverse()
obj.rs(input("Enter your string:"))