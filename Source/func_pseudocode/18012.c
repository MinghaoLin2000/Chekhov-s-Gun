_SetSystemLibraryLoadToBeInProcess
void SetSystemLibraryLoadToBeInProcess()
{
  qword_100018DE0 = qword_100018DE0 & 0xFFFFFFFFFFFFFFFCLL | 2;
}