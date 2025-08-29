-[AMParametersObserver setDelegate:]
void __cdecl -[AMParametersObserver setDelegate:](AMParametersObserver *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_delegate, a3);
}