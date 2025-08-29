-[UARPUpdaterDisplayControllerDelegate releaseTransactions]
void __cdecl -[UARPUpdaterDisplayControllerDelegate releaseTransactions](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2)
{
  OS_os_transaction *transaction; // x8

  transaction = self->_transaction;
  self->_transaction = 0LL;
  objc_release(transaction);
}