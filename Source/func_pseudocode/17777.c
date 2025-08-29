-[ModelKeyServerAPIResultError mergeFrom:]
void __cdecl -[ModelKeyServerAPIResultError mergeFrom:](ModelKeyServerAPIResultError *self, SEL a2, id a3)
{
  if ( *((_QWORD *)a3 + 1) )
    -[ModelKeyServerAPIResultError setMessage:](self, "setMessage:");
}