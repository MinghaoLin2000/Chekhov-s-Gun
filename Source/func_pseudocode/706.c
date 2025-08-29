-[DeviceFileSharingViewController contextualMenuDelete:]
// attributes: thunk
void __cdecl -[DeviceFileSharingViewController contextualMenuDelete:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceFileSharingViewController deleteSelectedItems](self, "deleteSelectedItems", a3);
}