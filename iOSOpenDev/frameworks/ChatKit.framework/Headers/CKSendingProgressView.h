/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/XXUnknownSuperclass.h>

@class CKProgressBar, UILabel;

@interface CKSendingProgressView : XXUnknownSuperclass {
	CKProgressBar *_sendingProgress;	// 48 = 0x30
	UILabel *_statusLabel;	// 52 = 0x34
}
@property(assign) float progressValue;	// G=0x54bd1; S=0x54bad; converted property
+ (CGRect)defaultFrame;	// 0x54b11
- (id)initWithFrame:(CGRect)frame;	// 0x54dbd
- (void)dealloc;	// 0x54b2d
- (void)layoutSubviews;	// 0x54c15
- (void)setStatus:(id)status;	// 0x54bf1
// converted property getter: - (float)progressValue;	// 0x54bd1
// converted property setter: - (void)setProgressValue:(float)value;	// 0x54bad
- (void)_stopAnimating;	// 0x54b8d
@end