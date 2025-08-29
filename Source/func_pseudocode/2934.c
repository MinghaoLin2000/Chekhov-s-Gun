-[AMPProgressBarViewController fractionCompleted]
double __cdecl -[AMPProgressBarViewController fractionCompleted](AMPProgressBarViewController *self, SEL a2)
{
  AMPProgressBarView *v2; // x19
  double v3; // d0
  double v4; // d8

  v2 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarViewController progressBarView](self, "progressBarView"));
  -[AMPProgressBarView fractionCompleted](v2, "fractionCompleted");
  v4 = v3;
  objc_release(v2);
  return v4;
}