-[BrowseService _checkSync]
void __cdecl -[BrowseService _checkSync](BrowseService *self, SEL a2)
{
  unsigned __int64 syncTimerSuspendedCount; // x8
  dispatch_object_s *syncTimer; // x0

  syncTimerSuspendedCount = self->_syncTimerSuspendedCount;
  self->_syncTimerSuspendedCount = syncTimerSuspendedCount + 1;
  if ( !syncTimerSuspendedCount )
  {
    syncTimer = (dispatch_object_s *)self->_syncTimer;
    if ( syncTimer )
      dispatch_resume(syncTimer);
  }
}