/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class MPButton, UIImageView, NSTimer, UIProgressView, UILabel, IUUserMessageDataSource;

@interface IUUserMessageView : XXUnknownSuperclass {
	UIImageView *_cloudImageView;	// 48 = 0x30
	NSTimer *_cloudProgressTimer;	// 52 = 0x34
	UIProgressView *_cloudProgressView;	// 56 = 0x38
	IUUserMessageDataSource *_dataSource;	// 60 = 0x3c
	MPButton *_findContentButton;	// 64 = 0x40
	UIImageView *_imageView;	// 68 = 0x44
	UILabel *_subtitleLabel;	// 72 = 0x48
	UILabel *_titleLabel;	// 76 = 0x4c
}
@property(retain, nonatomic) IUUserMessageDataSource *dataSource;	// G=0xad1bd; S=0xac69d; @synthesize=_dataSource
// declared property getter: - (id)dataSource;	// 0xad1bd
- (void)_sizeLabelToFit:(id)fit;	// 0xad0f9
- (void)_reloadView;	// 0xacd35
- (id)_newFindContentButton;	// 0xacc45
- (id)_newTitleLabel;	// 0xacac1
- (id)_newSubtitleLabel;	// 0xac92d
- (id)_newLabel;	// 0xac8b9
- (void)_isCloudUpdateInProgressDidChangeNotification:(id)_isCloudUpdateInProgress;	// 0xac839
- (void)_updateProgressTimer:(id)timer;	// 0xac721
- (void)_findContentButton:(id)button;	// 0xac6f5
// declared property setter: - (void)setDataSource:(id)source;	// 0xac69d
- (void)layoutSubviews;	// 0xabb49
- (void)didMoveToSuperview;	// 0xabaed
- (void)dealloc;	// 0xab9d5
- (id)initWithFrame:(CGRect)frame;	// 0xab85d
@end