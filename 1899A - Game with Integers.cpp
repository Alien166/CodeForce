if __name__ == '__main__':
   n = int(input())
   for i in range (n):
      print('Second' if int(input()) % 3 == 0 else 'First')

