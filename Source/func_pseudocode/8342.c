-[StoreUIService authenticateTask:handleDialogRequest:completion:]
void __cdecl -[StoreUIService authenticateTask:handleDialogRequest:completion:](
        StoreUIService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  -[StoreUIService presentDialogRequest:withResultHandler:](self, "presentDialogRequest:withResultHandler:", a4, a5);
}