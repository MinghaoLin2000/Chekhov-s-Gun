-[UARPUpdaterDisplayControllerDelegate setIsBusy:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate setIsBusy:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        bool a3)
{
  _BOOL4 v3; // w20
  UARPUpdaterDisplayControllerDelegate *v4; // x19
  int numProcess; // w8
  __int64 v6; // x8
  OS_os_transaction *transaction; // x0
  int v8; // w8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = a3;
  v4 = objc_retain(self);
  objc_sync_enter(v4);
  numProcess = v4->_numProcess;
  if ( v3 )
  {
    v4->_numProcess = numProcess + 1;
    if ( v4->_transaction )
      goto LABEL_8;
    v6 = os_transaction_create("com.apple.DarwinAccessoryUpdate.A2525");
    transaction = v4->_transaction;
    v4->_transaction = (OS_os_transaction *)v6;
    goto LABEL_4;
  }
  v8 = numProcess - 1;
  v4->_numProcess = v8;
  if ( !v8
    && !-[NSMutableSet count](v4->_checkInfo, "count")
    && !-[NSMutableDictionary count](v4->_restoreInfo, "count") )
  {
    transaction = v4->_transaction;
    v4->_transaction = 0LL;
LABEL_4:
    objc_release(transaction);
  }
LABEL_8:
  objc_sync_exit(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}