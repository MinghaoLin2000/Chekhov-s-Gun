-[AMActionLoaderServiceListener set_xpcServicesByConnection:]
void __cdecl -[AMActionLoaderServiceListener set_xpcServicesByConnection:](
        AMActionLoaderServiceListener *self,
        SEL a2,
        id a3)
{
  objc_storeStrong((id *)&self->__xpcServicesByConnection, a3);
}