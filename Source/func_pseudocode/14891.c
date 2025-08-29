-[FPCKService isInvalidated]
bool __cdecl -[FPCKService isInvalidated](FPCKService *self, SEL a2)
{
  FPCKService *v2; // x19
  bool invalidated; // w20

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  invalidated = v2->_invalidated;
  objc_sync_exit(v2);
  objc_release(v2);
  return invalidated;
}