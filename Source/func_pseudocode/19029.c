-[SiriNCAlertViewController siriViewController:stashSnippetControllerCard:forAddViewsCommand:]
void __cdecl -[SiriNCAlertViewController siriViewController:stashSnippetControllerCard:forAddViewsCommand:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x20
  id v8; // x21
  SiriUIDismissalOptions *v9; // x22
  id v10; // x21
  id v11; // x20
  _QWORD v12[4]; // [xsp+0h] [xbp-90h] BYREF
  id v13; // [xsp+20h] [xbp-70h]
  SiriNCAlertViewController *v14; // [xsp+28h] [xbp-68h]
  id v15; // [xsp+30h] [xbp-60h]
  _QWORD v16[5]; // [xsp+38h] [xbp-58h] BYREF

  v7 = objc_retain(a4);
  v8 = objc_retain(a5);
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_1000109C4;
  v16[3] = &unk_100020C60;
  v16[4] = self;
  +[NSAnimationContext runAnimationGroup:completionHandler:](
    &OBJC_CLASS___NSAnimationContext,
    "runAnimationGroup:completionHandler:",
    v16,
    0LL);
  v9 = objc_retainAutoreleasedReturnValue(
         +[SiriUIDismissalOptions optionsWithDismissalReason:](
           &OBJC_CLASS___SiriUIDismissalOptions,
           "optionsWithDismissalReason:",
           4LL));
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_100010A44;
  v12[3] = &unk_100020C90;
  v13 = v7;
  v14 = self;
  v15 = v8;
  v10 = objc_retain(v8);
  v11 = objc_retain(v7);
  -[SiriNCAlertViewController dismissController:dismissalOptions:completion:](
    self,
    "dismissController:dismissalOptions:completion:",
    self,
    v9,
    v12);
  objc_release(v15);
  objc_release(v13);
  objc_release(v9);
  objc_release(v10);
  objc_release(v11);
}