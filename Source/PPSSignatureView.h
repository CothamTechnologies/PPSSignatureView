#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface PPSSignatureView : GLKView

@property (assign, nonatomic) UIColor *strokeColor;
@property (assign, nonatomic) BOOL hasSignature;
@property (strong, nonatomic) UIImage *signatureImage;
// CT Addition
@property id signatureViewDelegate;

- (void)erase;
// CT Addition
- (void)remoteSetSignatureImage:(UIImage *)signatureImage;

@end

// CT Addition
@protocol CTPPSSignatureViewProtocol <NSObject>
@optional
- (void)signatureView:(PPSSignatureView *)signatureView didFinishEditingWithImage:(UIImage* )signatureImage;
@end
