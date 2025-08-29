-[AMRemoteActionRunner setDelegate:]
void __cdecl -[AMRemoteActionRunner setDelegate:](AMRemoteActionRunner *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_delegate, a3);
}