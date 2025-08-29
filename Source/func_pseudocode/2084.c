-[AMPPHMediaObject description]
id __cdecl -[AMPPHMediaObject description](AMPPHMediaObject *self, SEL a2)
{
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("URL: %@, irisURL: %@"),
           self->_currentVersionURL,
           self->_videoComplementURL);
}