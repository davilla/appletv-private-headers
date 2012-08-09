/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSString, UIImageView, UIImage;

@interface MPVideoBackgroundView : UIView {
	int _interfaceOrientation;	// 84 = 0x54
	UIView *_imageView;	// 88 = 0x58
	UIImageView *_iconView;	// 92 = 0x5c
	UIImageView *_backgroundPlaceholderImageView;	// 96 = 0x60
	UIView *_backgroundPlaceholderPosterImageView;	// 100 = 0x64
	UIView *_backgroundPlaceholderView;	// 104 = 0x68
	UIImageView *_customBackgroundImageView;	// 108 = 0x6c
	NSString *_destinationName;	// 112 = 0x70
	int _destinationPlaceholderStyle;	// 116 = 0x74
	BOOL _showDestinationPlaceholder;	// 120 = 0x78
	id _layoutSubviewsPostflightHandler;	// 124 = 0x7c
}
@property(retain, nonatomic) UIImage *backgroundPlaceholderImage;	// G=0x336f4da5; S=0x336f4bd1; 
@property(retain, nonatomic) UIView *backgroundPlaceholderPosterImageView;	// G=0x336f529d; S=0x336f4d15; @synthesize=_backgroundPlaceholderPosterImageView
@property(readonly, assign, nonatomic) UIView *backgroundPlaceholderView;	// G=0x336f4dc5; 
@property(copy, nonatomic) NSString *destinationName;	// G=0x336f52ad; S=0x336f4eb1; @synthesize=_destinationName
@property(assign, nonatomic) int destinationPlaceholderStyle;	// G=0x336f52c1; S=0x336f4f09; @synthesize=_destinationPlaceholderStyle
@property(assign, nonatomic) int interfaceOrientation;	// G=0x336f52d1; S=0x336f4599; @synthesize=_interfaceOrientation
@property(copy, nonatomic) id layoutSubviewsPostflightHandler;	// G=0x336f52e1; S=0x336f52f5; @synthesize=_layoutSubviewsPostflightHandler
- (id)initWithFrame:(CGRect)frame;	// 0x336f4229
- (void)_createInformationalTitleView:(id *)view systemFont:(id)font lineBreakMode:(int)mode;	// 0x336f48ed
- (void)_tvOutCapabilityDidChangeNotification:(id)_tvOutCapability;	// 0x336f4f71
- (void)_updateDestinationBackgroundViewAnimated:(BOOL)animated;	// 0x336f4f89
// declared property getter: - (id)backgroundPlaceholderImage;	// 0x336f4da5
// declared property getter: - (id)backgroundPlaceholderPosterImageView;	// 0x336f529d
// declared property getter: - (id)backgroundPlaceholderView;	// 0x336f4dc5
- (void)dealloc;	// 0x336f42b1
// declared property getter: - (id)destinationName;	// 0x336f52ad
// declared property getter: - (int)destinationPlaceholderStyle;	// 0x336f52c1
// declared property getter: - (int)interfaceOrientation;	// 0x336f52d1
- (void)layoutSubviews;	// 0x336f43f9
// declared property getter: - (id)layoutSubviewsPostflightHandler;	// 0x336f52e1
- (id)qtIcon;	// 0x336f45b9
// declared property setter: - (void)setBackgroundPlaceholderImage:(id)image;	// 0x336f4bd1
// declared property setter: - (void)setBackgroundPlaceholderPosterImageView:(id)view;	// 0x336f4d15
- (void)setCustomBackgroundImage:(id)image;	// 0x336f4a6d
// declared property setter: - (void)setDestinationName:(id)name;	// 0x336f4eb1
// declared property setter: - (void)setDestinationPlaceholderStyle:(int)style;	// 0x336f4f09
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x336f4599
// declared property setter: - (void)setLayoutSubviewsPostflightHandler:(id)handler;	// 0x336f52f5
- (void)setShowDestinationPlaceholder:(BOOL)placeholder animated:(BOOL)animated;	// 0x336f4f31
- (void)setShowQTAudioOnlyUI:(BOOL)ui;	// 0x336f45f1
@end
