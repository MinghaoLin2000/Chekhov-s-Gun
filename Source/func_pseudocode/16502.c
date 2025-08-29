-[iAUPServer processDataFromAccessory:]
void __cdecl -[iAUPServer processDataFromAccessory:](iAUPServer *self, SEL a2, id a3)
{
  unsigned __int8 *v5; // x21
  __int64 v6; // x22

  v5 = (unsigned __int8 *)objc_msgSend(a3, "bytes");
  if ( objc_msgSend(a3, "length") )
  {
    v6 = 0LL;
    do
      -[iAUPServer processInByte:](self, "processInByte:", v5[v6++]);
    while ( (unsigned __int64)objc_msgSend(a3, "length") > (unsigned int)v6 );
  }
}