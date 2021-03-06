/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"
#import "BRMediaShelfViewCell.h"
#import "BRPosterImageDataSource.h"
#import "BRControl.h"

@class BRPosterReflectionControl, BRAutoScrollingTextControl, BRWaitSpinnerControl, NSString, BRHorizontalSegmentedWidget, BRImage, BRTextControl, BRImageControl, BRAsyncTask;
@protocol BRImageProxy;

@interface BRPosterControl : BRControl <BRMediaShelfViewCell, BRContainerViewCell, BRPosterImageDataSource> {
@private
	int _style;	// 48 = 0x30
	BRImageControl *_defaultImageControl;	// 52 = 0x34
	BRImage *_defaultImage;	// 56 = 0x38
	BRControl *_imageControl;	// 60 = 0x3c
	BRImage *_image;	// 64 = 0x40
	id<BRImageProxy> _imageProxy;	// 68 = 0x44
	int _imageSize;	// 72 = 0x48
	BRHorizontalSegmentedWidget *_numberBadge;	// 76 = 0x4c
	int _numberBadgeValue;	// 80 = 0x50
	CGColorRef _posterBorderColor;	// 84 = 0x54
	float _posterBorderWidth;	// 88 = 0x58
	BOOL _drawFakeAntialiasTopLine;	// 92 = 0x5c
	BOOL _imageRequested;	// 93 = 0x5d
	NSString *_artworkIdentifier;	// 96 = 0x60
	BRAsyncTask *_imageTask;	// 100 = 0x64
	BRPosterReflectionControl *_reflectionControl;	// 104 = 0x68
	float _reflectionAmount;	// 108 = 0x6c
	float _reflectionBaseline;	// 112 = 0x70
	BRTextControl *_ordinalTextControl;	// 116 = 0x74
	BRAutoScrollingTextControl *_autoScrollingTitleControl;	// 120 = 0x78
	BRTextControl *_subtitleTextControl;	// 124 = 0x7c
	float _titleWidthScale;	// 128 = 0x80
	float _titleVerticalOffset;	// 132 = 0x84
	float _subtitleVerticalOffset;	// 136 = 0x88
	BOOL _alwaysShowTitles;	// 140 = 0x8c
	BOOL _onlyShowSubtitlesWhenFocused;	// 141 = 0x8d
	BRWaitSpinnerControl *_spinnerControl;	// 144 = 0x90
	XXStruct_qlg9jA _cornerRadius;	// 148 = 0x94
	float _cropAspectRatio;	// 152 = 0x98
	BOOL _cropAndFill;	// 156 = 0x9c
	BOOL _deletterboxImage;	// 157 = 0x9d
	BRImageControl *_badgeImageControl;	// 160 = 0xa0
	BRImage *_badgeImage;	// 164 = 0xa4
	float _badgeScale;	// 168 = 0xa8
	float _badgeOpacity;	// 172 = 0xac
	float _badgeFocusedOpacity;	// 176 = 0xb0
	int _badgePosition;	// 180 = 0xb4
	BOOL _badgeUpdated;	// 184 = 0xb8
	BRImage *_borderImage;	// 188 = 0xbc
	CGRect _borderImageFocusRect;	// 192 = 0xc0
	CGRect _borderImagePhotoImageRect;	// 208 = 0xd0
	NSString *_accessibilityLabel;	// 224 = 0xe0
	BOOL _decoratedImageCacheEnabled;	// 228 = 0xe4
	BOOL _usingDecoratedImage;	// 229 = 0xe5
	BOOL _imageEdgeAntialiasingEnabled;	// 230 = 0xe6
	id _loadCompletionBlock;	// 232 = 0xe8
	BOOL _readyToDisplay;	// 236 = 0xec
	BOOL _ignoreLoadAndDisplayOnDemand;	// 237 = 0xed
	BOOL _disableAnimations;	// 238 = 0xee
}
@property(retain) NSString *accessibilityLabel;	// G=0x302f58dd; S=0x302f59ad; converted property
@property(assign) BOOL alwaysShowTitles;	// G=0x302f4195; S=0x302f4135; converted property
@property(readonly, retain) BRImage *badgeImage;	// G=0x302f3a1d; converted property
@property(assign) float badgeOpacity;	// G=0x302f3af9; S=0x302f3a89; converted property
@property(readonly, assign) int badgePosition;	// G=0x302f3a2d; converted property
@property(assign) float badgeScale;	// G=0x302f3a79; S=0x302f3a3d; converted property
@property(assign) XXStruct_qlg9jA cornerRadius;	// G=0x302f3875; S=0x302f3855; converted property
@property(assign) BOOL cropAndFill;	// G=0x302f38d5; S=0x302f3891; converted property
@property(assign) float cropAspectRatio;	// G=0x302f3939; S=0x302f38e5; converted property
@property(retain) BRImage *defaultImage;	// G=0x302f2e0d; S=0x302f2db1; converted property
@property(assign) BOOL deletterboxImage;	// G=0x302f43d9; S=0x302f43c9; converted property
@property(assign) float focusedBadgeOpacity;	// G=0x302f3b79; S=0x302f3b09; converted property
@property(readonly, retain) BRImage *image;	// G=0x302f43b9; converted property
@property(retain) id imageProxy;	// G=0x302f33c5; S=0x302f3311; converted property
@property(assign) int numberBadgeValue;	// G=0x302f3e79; S=0x302f3b89; converted property
@property(assign) BOOL onlyShowSubtitlesWhenFocused;	// G=0x302f41b5; S=0x302f41a5; converted property
@property(assign) int ordinal;	// G=0x302f36d5; S=0x302f3555; converted property
@property(assign) CGColorRef posterBorderColor;	// G=0x302f2e61; S=0x302f2e1d; converted property
@property(assign) float posterBorderWidth;	// G=0x302f2ead; S=0x302f2e71; converted property
@property(assign) int posterStyle;	// G=0x302f3301; S=0x302f2ee9; converted property
@property(assign) float reflectionAmount;	// G=0x302f34f9; S=0x302f34a5; converted property
@property(assign) float reflectionBaseline;	// G=0x302f3545; S=0x302f3509; converted property
@property(assign) BOOL spinnerEnabled;	// G=0x302f383d; S=0x302f371d; converted property
@property(retain) id subtitle;	// G=0x302f4399; S=0x302f41c5; converted property
@property(assign) float subtitleVerticalOffset;	// G=0x302f4125; S=0x302f40e9; converted property
@property(retain) id title;	// G=0x302f3ff5; S=0x302f3e89; converted property
@property(assign) float titleVerticalOffset;	// G=0x302f40d9; S=0x302f409d; converted property
@property(assign) float titleWidthScale;	// G=0x302f406d; S=0x302f4025; converted property
+ (void)initialize;	// 0x302f2881
+ (Class)layerClass;	// 0x302f2865
+ (id)polaroidPosterWithImageProxy:(id)imageProxy title:(id)title;	// 0x302f2809
+ (id)posterButtonWithImageProxy:(id)imageProxy title:(id)title;	// 0x302f267d
+ (id)tilePosterWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x302f2771
+ (id)twoLinePosterButtonWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x302f26ed
- (id)init;	// 0x302f28f1
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x302f69bd
- (id)_artworkIdentifier;	// 0x302f6cb9
- (void)_clearCurrentImage;	// 0x302f6dbd
- (void)_cropImage:(id)image;	// 0x302f7cc5
- (id)_currentImage;	// 0x302f610d
- (CGRect)_currentImageRect;	// 0x302f6289
- (void)_decorateImage:(id)image;	// 0x302f7f49
- (id)_decoratedImageIdentifier:(id)identifier size:(CGSize)size;	// 0x302f7ee9
- (void)_deletterboxImage:(id)image;	// 0x302f7c6d
- (id)_fetchImage;	// 0x302f71ad
- (void)_focusWasChanged;	// 0x302f6aa9
- (id)_getDecoratedImage:(id)image imageID:(id)anId toSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x302f8041
- (id)_getImageFromCacheNamed:(id)cacheNamed withSize:(CGSize)size;	// 0x302f70d1
- (BOOL)_imageIsCorrectSize:(id)size requiresTask:(BOOL *)task requiresDeletterBox:(BOOL *)box;	// 0x302f74f1
- (void)_imageLoadFailed:(id)failed;	// 0x302f7411
- (BOOL)_imageRequiresCrop;	// 0x302f5eb1
- (int)_imageSize;	// 0x302f6d91
- (void)_imageTaskComplete:(id)complete;	// 0x302f870d
- (void)_imageUpdated:(id)updated;	// 0x302f7271
- (void)_lowMemoryNotification:(id)notification;	// 0x302f6e49
- (CGRect)_mainImageRectFromMainImageUnitRect;	// 0x302f6335
- (CGRect)_maxImageRect;	// 0x302f6139
- (id)_numberBadgeAttributes;	// 0x302f6d0d
- (id)_ordinalAttributes;	// 0x302f68ad
- (void)_performDeactivation;	// 0x302f6e89
- (BOOL)_resizeImage:(id)image;	// 0x302f7641
- (void)_restartImageResizing;	// 0x302f6cc9
- (void)_scaleImage:(id)image;	// 0x302f7ddd
- (void)_setArtworkIdentifier:(id)identifier;	// 0x302f6b91
- (void)_setAttributedTitle:(id)title withCrossfade:(BOOL)crossfade;	// 0x302f677d
- (void)_setFinalFormImage:(id)image;	// 0x302f8805
- (void)_startDeletterboxTaskForImage:(id)image;	// 0x302f7af1
- (void)_startImageProcessingTaskForImage:(id)image;	// 0x302f76b9
- (id)_subtitleAttributes;	// 0x302f5dc9
- (id)_titleAttributes;	// 0x302f5bb9
- (void)_updateDefaultArtwork;	// 0x302f5efd
- (void)_updateDeferredArtwork;	// 0x302f6f81
- (void)_updateTextLayerOpacity;	// 0x302f63f9
// converted property getter: - (id)accessibilityLabel;	// 0x302f58dd
- (id)accessibilitySecondaryLabel;	// 0x302f5945
// converted property getter: - (BOOL)alwaysShowTitles;	// 0x302f4195
- (id)badge;	// 0x302f5a05
// converted property getter: - (id)badgeImage;	// 0x302f3a1d
// converted property getter: - (float)badgeOpacity;	// 0x302f3af9
// converted property getter: - (int)badgePosition;	// 0x302f3a2d
// converted property getter: - (float)badgeScale;	// 0x302f3a79
- (void)cancelContainerViewLoad;	// 0x302f5a89
- (void)controlWasActivated;	// 0x302f2bfd
- (void)controlWasDeactivated;	// 0x302f2cdd
- (void)controlWasFocused;	// 0x302f46c5
- (void)controlWasUnfocused;	// 0x302f4705
// converted property getter: - (XXStruct_qlg9jA)cornerRadius;	// 0x302f3875
// converted property getter: - (BOOL)cropAndFill;	// 0x302f38d5
// converted property getter: - (float)cropAspectRatio;	// 0x302f3939
- (void)dealloc;	// 0x302f29cd
// converted property getter: - (id)defaultImage;	// 0x302f2e0d
// converted property getter: - (BOOL)deletterboxImage;	// 0x302f43d9
- (id)description;	// 0x302f2b85
- (BOOL)drawsFakeAntiAliasTopLine;	// 0x302f2ed9
- (CGRect)focusCursorFrame;	// 0x302f43e9
// converted property getter: - (float)focusedBadgeOpacity;	// 0x302f3b79
- (void)hideTextLayers;	// 0x302f4745
// converted property getter: - (id)image;	// 0x302f43b9
// converted property getter: - (id)imageProxy;	// 0x302f33c5
- (BOOL)isAccessibilityElement;	// 0x302f58d9
- (void)layoutSubcontrols;	// 0x302f47c5
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x302f5a15
// converted property getter: - (int)numberBadgeValue;	// 0x302f3e79
// converted property getter: - (BOOL)onlyShowSubtitlesWhenFocused;	// 0x302f41b5
// converted property getter: - (int)ordinal;	// 0x302f36d5
// converted property getter: - (CGColorRef)posterBorderColor;	// 0x302f2e61
// converted property getter: - (float)posterBorderWidth;	// 0x302f2ead
- (id)posterImage;	// 0x302f5b31
// converted property getter: - (int)posterStyle;	// 0x302f3301
- (float)preferredCursorRadius;	// 0x302f59f1
// converted property getter: - (float)reflectionAmount;	// 0x302f34f9
// converted property getter: - (float)reflectionBaseline;	// 0x302f3545
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x302f59ad
// converted property setter: - (void)setAlwaysShowTitles:(BOOL)titles;	// 0x302f4135
- (void)setBadgeImage:(id)image atPosition:(int)position;	// 0x302f3949
// converted property setter: - (void)setBadgeOpacity:(float)opacity;	// 0x302f3a89
// converted property setter: - (void)setBadgeScale:(float)scale;	// 0x302f3a3d
// converted property setter: - (void)setCornerRadius:(XXStruct_qlg9jA)radius;	// 0x302f3855
// converted property setter: - (void)setCropAndFill:(BOOL)fill;	// 0x302f3891
// converted property setter: - (void)setCropAspectRatio:(float)ratio;	// 0x302f38e5
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x302f2db1
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x302f43c9
- (void)setDrawsFakeAntialiasTopLine:(BOOL)line;	// 0x302f2ebd
- (BOOL)setEnableDecoratedImageCache:(BOOL)cache;	// 0x302f33d5
// converted property setter: - (void)setFocusedBadgeOpacity:(float)opacity;	// 0x302f3b09
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x302f5ae5
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x302f5b05
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x302f3431
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x302f3311
- (void)setImageProxy:(id)proxy withSize:(int)size;	// 0x302f33a5
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x302f42e1
- (void)setNonAttributedTitle:(id)title;	// 0x302f3ebd
- (void)setNonAttributedTitleWithCrossfade:(id)crossfade;	// 0x302f3f75
// converted property setter: - (void)setNumberBadgeValue:(int)value;	// 0x302f3b89
// converted property setter: - (void)setOnlyShowSubtitlesWhenFocused:(BOOL)focused;	// 0x302f41a5
// converted property setter: - (void)setOrdinal:(int)ordinal;	// 0x302f3555
// converted property setter: - (void)setPosterBorderColor:(CGColorRef)color;	// 0x302f2e1d
// converted property setter: - (void)setPosterBorderWidth:(float)width;	// 0x302f2e71
// converted property setter: - (void)setPosterStyle:(int)style;	// 0x302f2ee9
- (void)setReadyToDisplay;	// 0x302f5ab5
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x302f34a5
// converted property setter: - (void)setReflectionBaseline:(float)baseline;	// 0x302f3509
// converted property setter: - (void)setSpinnerEnabled:(BOOL)enabled;	// 0x302f371d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x302f41c5
// converted property setter: - (void)setSubtitleVerticalOffset:(float)offset;	// 0x302f40e9
// converted property setter: - (void)setTitle:(id)title;	// 0x302f3e89
// converted property setter: - (void)setTitleVerticalOffset:(float)offset;	// 0x302f409d
// converted property setter: - (void)setTitleWidthScale:(float)scale;	// 0x302f4025
- (void)setTitleWithCrossfade:(id)crossfade;	// 0x302f3e9d
// converted property getter: - (BOOL)spinnerEnabled;	// 0x302f383d
// converted property getter: - (id)subtitle;	// 0x302f4399
// converted property getter: - (float)subtitleVerticalOffset;	// 0x302f4125
// converted property getter: - (id)title;	// 0x302f3ff5
- (id)titleControl;	// 0x302f4015
// converted property getter: - (float)titleVerticalOffset;	// 0x302f40d9
// converted property getter: - (float)titleWidthScale;	// 0x302f406d
- (void)windowMaxBoundsChanged;	// 0x302f2d1d
@end

