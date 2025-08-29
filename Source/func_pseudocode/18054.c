_NetFSMountURLCancel
// attributes: thunk
int __cdecl NetFSMountURLCancel(AsyncRequestID requestID)
{
  return _NAConnectToServerCancel(requestID);
}