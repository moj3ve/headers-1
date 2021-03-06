#import <UIKit/UIView.h>

API_AVAILABLE(ios(9.0))
@interface _UILayerHostView : UIView

@property (nonatomic) unsigned int contextID;
@property (nonatomic) BOOL inheritsSecurity;
@property (readonly, retain, nonatomic) CALayerHost *layerHost;

@end
