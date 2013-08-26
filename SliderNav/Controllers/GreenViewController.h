#import "PanelDelegate.h"

@interface GreenViewController : UIViewController

@property (nonatomic, assign) id<PanelDelegate> delegate;
@property (weak, nonatomic) IBOutlet UIButton *navButton;

- (IBAction)navButtonClicked:(id)sender;

@end
