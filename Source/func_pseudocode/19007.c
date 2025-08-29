-[SiriNCAlertViewController dismissSiriViewController:dismissalOptions:completion:]
void __cdecl -[SiriNCAlertViewController dismissSiriViewController:dismissalOptions:completion:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  -[SiriNCAlertViewController dismissController:dismissalOptions:completion:](
    self,
    "dismissController:dismissalOptions:completion:",
    self,
    a4,
    a5);
}