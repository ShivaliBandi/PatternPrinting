def solidRect(irow,icol):
  for ircnt in range(0,irow):
    for iccnt in range(0,icol):
      print("*",end="\t")
    print("\r")
def main():
  print("This is solid rectangle")
  irow=input("enter number of rows ")
  icol=input("enter number of columns")
  irow=int(irow)
  icol=int(icol)
  solidRect(irow,icol)
 
if __name__== "__main__":
  main()