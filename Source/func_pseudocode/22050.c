_AECreateAppleEvent
OSErr __cdecl AECreateAppleEvent(
        AEEventClass theAEEventClass,
        AEEventID theAEEventID,
        const AEAddressDesc *target,
        AEReturnID returnID,
        AETransactionID transactionID,
        AppleEvent *result)
{
  return _AECreateAppleEvent(theAEEventClass, theAEEventID, target, returnID, transactionID, result);
}