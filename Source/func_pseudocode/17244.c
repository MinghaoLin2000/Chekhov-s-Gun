-[AMLoaderServiceAction set_service:]
void __cdecl -[AMLoaderServiceAction set_service:](AMLoaderServiceAction *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->__service, a3);
}