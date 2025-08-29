+[UARPUpdaterDisplayControllerDelegate hostIsInternal]
bool __cdecl +[UARPUpdaterDisplayControllerDelegate hostIsInternal](id a1, SEL a2)
{
  if ( qword_100026C40 != -1 )
    dispatch_once(&qword_100026C40, &stru_1000206E0);
  return byte_100026C38;
}