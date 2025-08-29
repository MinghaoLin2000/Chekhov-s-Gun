-[ServiceDelegate .cxx_destruct]
void __cdecl -[ServiceDelegate .cxx_destruct](ServiceDelegate *self, SEL a2)
{
  objc_storeStrong((id *)&self->_queue, 0LL);
}