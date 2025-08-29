-[PAXPCDispatch _handleSetPassUbiquityMessage:peer:]
void __cdecl -[PAXPCDispatch _handleSetPassUbiquityMessage:peer:](PAXPCDispatch *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  if ( (unsigned int)PKCloudKitPassSyncEnabled() )
    -[PAXPCDispatch _handleSetPassUbiquityMessageWithCloudKit:peer:](
      self,
      "_handleSetPassUbiquityMessageWithCloudKit:peer:",
      v7,
      v6);
  else
    -[PAXPCDispatch _handleSetPassUbiquityMessageWithUbiquity:peer:](
      self,
      "_handleSetPassUbiquityMessageWithUbiquity:peer:",
      v7,
      v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}