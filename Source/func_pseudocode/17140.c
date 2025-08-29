-[AMActionLoaderServiceListener .cxx_destruct]
void __cdecl -[AMActionLoaderServiceListener .cxx_destruct](AMActionLoaderServiceListener *self, SEL a2)
{
  objc_storeStrong((id *)&self->__xpcServicesByConnection, 0LL);
}