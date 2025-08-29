-[BrowseService stopBrowsing0]
void __cdecl -[BrowseService stopBrowsing0](BrowseService *self, SEL a2)
{
  Browse_Bonjour *bonjour; // x0
  Browse_MDM *mdm; // x0
  Browse_WirelessProximity *proximity; // x0
  Browse_Extension *extension; // x0
  Browse_CUPS *cups; // x0
  Browse_NAN *nan; // x0
  OS_dispatch_source *syncTimer; // x0
  dispatch_source_s *v10; // x20
  OS_dispatch_source *v11; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[Browse_Bonjour cancel](self->_bonjour, "cancel");
  bonjour = self->_bonjour;
  self->_bonjour = 0LL;
  objc_release(bonjour);
  -[Browse_MDM cancel](self->_mdm, "cancel");
  mdm = self->_mdm;
  self->_mdm = 0LL;
  objc_release(mdm);
  -[Browse_WirelessProximity cancel](self->_proximity, "cancel");
  proximity = self->_proximity;
  self->_proximity = 0LL;
  objc_release(proximity);
  -[Browse_Extension cancel](self->_extension, "cancel");
  extension = self->_extension;
  self->_extension = 0LL;
  objc_release(extension);
  -[Browse_CUPS cancel](self->_cups, "cancel");
  cups = self->_cups;
  self->_cups = 0LL;
  objc_release(cups);
  -[Browse_NAN cancel](self->_nan, "cancel");
  nan = self->_nan;
  self->_nan = 0LL;
  objc_release(nan);
  syncTimer = self->_syncTimer;
  if ( syncTimer )
  {
    v10 = objc_retain(syncTimer);
    v11 = self->_syncTimer;
    self->_syncTimer = 0LL;
    objc_release(v11);
    dispatch_source_cancel(v10);
    if ( !self->_syncTimerSuspendedCount )
      dispatch_resume(v10);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v10);
  }
}