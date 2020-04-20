def hallowRect(irow,icol):
  for ircnt in range(irow):
    for iccnt in range(icol):
        if (ircnt==0 or ircnt==irow-1 or iccnt==0 or iccnt==icol-1):
            print('*',end=' ')
        else:
            print(' ',end=' ')
    print()
def main():
  print("This is hallow rectangle")
  irow=input("enter number of rows ")
  icol=input("enter number of columns")
  irow=int(irow)
  icol=int(icol)
  
  print("------------------------------------------------")
  hallowRect(irow,icol)
if __name__== "__main__":
  main()