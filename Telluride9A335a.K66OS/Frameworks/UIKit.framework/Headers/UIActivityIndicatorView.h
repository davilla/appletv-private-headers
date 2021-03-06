/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, UIColor, NSString, NSArray;

@interface UIActivityIndicatorView : UIView <NSCoding> {
@private
	double _duration;	// 48 = 0x30
	BOOL _animating;	// 56 = 0x38
	int _activityIndicatorViewStyle;	// 60 = 0x3c
	int _actualActivityIndicatorViewStyle;	// 64 = 0x40
	BOOL _hidesWhenStopped;	// 68 = 0x44
	float _width;	// 72 = 0x48
	BOOL _hasShadow;	// 76 = 0x4c
	UIColor *_color;	// 80 = 0x50
	int _spokeCount;	// 84 = 0x54
	CGSize _shadowOffset;	// 88 = 0x58
	UIColor *_shadowColor;	// 96 = 0x60
	float _innerRadius;	// 100 = 0x64
	int _spokeFrameRatio;	// 104 = 0x68
	NSArray *_spokeImages;	// 108 = 0x6c
	BOOL _clockWise;	// 112 = 0x70
	BOOL _spinning;	// 113 = 0x71
	float _spinningDuration;	// 116 = 0x74
	BOOL _useArtwork;	// 120 = 0x78
	NSString *_artBackupKeyString;	// 124 = 0x7c
	UIImageView *_internalView;	// 128 = 0x80
}
@property(assign, nonatomic) int activityIndicatorViewStyle;	// G=0x33c02475; S=0x33a44311; @synthesize=_activityIndicatorViewStyle
@property(assign, getter=isAnimating) BOOL animating;	// G=0x33a41d25; S=0x33c0242d; converted property
@property(readonly, assign, nonatomic) NSString *artBackupKeyString;	// G=0x33c02591; @synthesize=_artBackupKeyString
@property(assign, nonatomic) BOOL clockWise;	// G=0x33c02531; S=0x33c01905; @synthesize=_clockWise
@property(retain, nonatomic) UIColor *color;	// G=0x33c024b5; S=0x33c016bd; @synthesize=_color
@property(assign) BOOL hasShadow;	// G=0x33c02495; S=0x33c024a5; @synthesize=_hasShadow
@property(assign, nonatomic) BOOL hidesWhenStopped;	// G=0x33ac66a1; S=0x33a41cdd; @synthesize=_hidesWhenStopped
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x33c015f5; S=0x33c01619; converted property
@property(assign, nonatomic) float innerRadius;	// G=0x33c02501; S=0x33c01895; @synthesize=_innerRadius
@property(readonly, assign, nonatomic) UIImageView *internalView;	// G=0x33c025a1; @synthesize=_internalView
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x33c024f1; S=0x33c0175d; @synthesize=_shadowColor
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x33c024d5; S=0x33c017f9; @synthesize=_shadowOffset
@property(assign) BOOL spinning;	// G=0x33c02541; S=0x33c02551; @synthesize=_spinning
@property(assign, nonatomic) float spinningDuration;	// G=0x33c02561; S=0x33c01935; @synthesize=_spinningDuration
@property(assign, nonatomic) int spokeCount;	// G=0x33c024c5; S=0x33c01869; @synthesize=_spokeCount
@property(assign, nonatomic) int spokeFrameRatio;	// G=0x33c02511; S=0x33c018d1; @synthesize=_spokeFrameRatio
@property(readonly, assign) NSArray *spokeImages;	// G=0x33c02521; @synthesize=_spokeImages
@property(assign, nonatomic) BOOL useArtwork;	// G=0x33c02571; S=0x33c02581; @synthesize=_useArtwork
@property(assign, nonatomic) float width;	// G=0x33c02485; S=0x33c01681; @synthesize=_width
+ (id)_loadResourcesForStyle:(int)style;	// 0x33a42b41
+ (CGSize)defaultSizeForStyle:(int)style;	// 0x33a41999
+ (CGSize)size;	// 0x33c023f9
- (id)initWithActivityIndicatorStyle:(int)activityIndicatorStyle;	// 0x33a418f9
- (id)initWithCoder:(id)coder;	// 0x33c01291
- (id)initWithFrame:(CGRect)frame;	// 0x33c01255
- (float)_alphaValueForStep:(int)step;	// 0x33c01a95
- (void)_applicationDidEnterBackground:(id)_application;	// 0x33a45a39
- (void)_applicationWillEnterForeground:(id)_application;	// 0x33c01229
- (id)_artBackupKey;	// 0x33a42839
- (BOOL)_canCustomize;	// 0x33c023d5
- (BOOL)_canCustomizeStyle:(int)style;	// 0x33c0239d
- (id)_commonInitWithFrame:(CGRect)frame;	// 0x33a419d5
- (int)_customStyleForStyle:(int)style;	// 0x33c02375
- (id)_defaulColorForStyle:(int)style;	// 0x33a42409
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x33ac5a09
- (void)_feedTheGear;	// 0x33a41d35
- (id)_generateImages;	// 0x33c020c9
- (id)_imageForStep:(int)step;	// 0x33c01b39
- (BOOL)_isArtWorkBased;	// 0x33a42819
- (id)_layoutInfosForStyle:(int)style;	// 0x33a422b1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33c014a9
- (void)_setUpAnimation;	// 0x33ac5d31
- (BOOL)_shouldGoBackToBaseStyle;	// 0x33a42755
- (BOOL)_shouldGoToCustomStyle;	// 0x33a425c5
- (float)_spokeLengthForGearWidth:(float)gearWidth;	// 0x33c01a09
- (float)_spokeWidthForGearWidth:(float)gearWidth;	// 0x33c0195d
- (id)_styleNameForStyle:(int)style;	// 0x33c02071
- (void)_tearDownAnimation;	// 0x33ac6709
- (void)_updateInternalViewFrameWithBounds:(CGRect)bounds;	// 0x33a41b79
- (float)_widthForGearWidth:(float)gearWidth;	// 0x33c01a6d
// declared property getter: - (int)activityIndicatorViewStyle;	// 0x33c02475
- (id)artBackupKey;	// 0x33c02029
// declared property getter: - (id)artBackupKeyString;	// 0x33c02591
// declared property getter: - (BOOL)clockWise;	// 0x33c02531
// declared property getter: - (id)color;	// 0x33c024b5
- (void)dealloc;	// 0x33aca809
- (void)encodeWithCoder:(id)coder;	// 0x33c014fd
- (void)generateImages;	// 0x33c023c5
// declared property getter: - (BOOL)hasShadow;	// 0x33c02495
// declared property getter: - (BOOL)hidesWhenStopped;	// 0x33ac66a1
// declared property getter: - (float)innerRadius;	// 0x33c02501
// declared property getter: - (id)internalView;	// 0x33c025a1
// converted property getter: - (BOOL)isAnimating;	// 0x33a41d25
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c0651d
// converted property getter: - (BOOL)isHighlighted;	// 0x33c015f5
// declared property setter: - (void)setActivityIndicatorViewStyle:(int)style;	// 0x33a44311
// converted property setter: - (void)setAnimating:(BOOL)animating;	// 0x33c0242d
- (void)setAnimationDuration:(double)duration;	// 0x33ac5879
- (void)setBounds:(CGRect)bounds;	// 0x33c02159
// declared property setter: - (void)setClockWise:(BOOL)wise;	// 0x33c01905
// declared property setter: - (void)setColor:(id)color;	// 0x33c016bd
- (void)setFrame:(CGRect)frame;	// 0x33a41b01
// declared property setter: - (void)setHasShadow:(BOOL)shadow;	// 0x33c024a5
// declared property setter: - (void)setHidesWhenStopped:(BOOL)stopped;	// 0x33a41cdd
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x33c01619
// declared property setter: - (void)setInnerRadius:(float)radius;	// 0x33c01895
// declared property setter: - (void)setShadowColor:(id)color;	// 0x33c0175d
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x33c017f9
// declared property setter: - (void)setSpinning:(BOOL)spinning;	// 0x33c02551
// declared property setter: - (void)setSpinningDuration:(float)duration;	// 0x33c01935
// declared property setter: - (void)setSpokeCount:(int)count;	// 0x33c01869
// declared property setter: - (void)setSpokeFrameRatio:(int)ratio;	// 0x33c018d1
- (void)setStyle:(int)style;	// 0x33c0241d
// declared property setter: - (void)setUseArtwork:(BOOL)artwork;	// 0x33c02581
// declared property setter: - (void)setWidth:(float)width;	// 0x33c01681
// declared property getter: - (id)shadowColor;	// 0x33c024f1
// declared property getter: - (CGSize)shadowOffset;	// 0x33c024d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33a44469
// declared property getter: - (BOOL)spinning;	// 0x33c02541
// declared property getter: - (float)spinningDuration;	// 0x33c02561
// declared property getter: - (int)spokeCount;	// 0x33c024c5
// declared property getter: - (int)spokeFrameRatio;	// 0x33c02511
// declared property getter: - (id)spokeImages;	// 0x33c02521
- (void)startAnimating;	// 0x33ac5cd1
- (void)startAnimation;	// 0x33c02455
- (void)stopAnimating;	// 0x33ac66b1
- (void)stopAnimation;	// 0x33c02465
// declared property getter: - (BOOL)useArtwork;	// 0x33c02571
// declared property getter: - (float)width;	// 0x33c02485
@end

