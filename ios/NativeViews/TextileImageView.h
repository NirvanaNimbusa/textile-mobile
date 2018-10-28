#import <UIKit/UIKit.h>
#import <React/RCTResizeMode.h>
#import <React/UIView+React.h>

@class RCTBridge;

@interface TextileImageView : UIImageView

- (instancetype)initWithBridge:(RCTBridge *)bridge NS_DESIGNATED_INITIALIZER;

@property (nonatomic, strong) NSString *imageId;
@property (nonatomic, assign) int minWidth;
@property (nonatomic, assign) RCTResizeMode resizeMode;
@property (nonatomic, copy) RCTDirectEventBlock onLoad;
@property (nonatomic, copy) RCTDirectEventBlock onError;

@end
