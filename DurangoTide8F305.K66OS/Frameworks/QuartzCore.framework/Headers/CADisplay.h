/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, CADisplayMode, NSArray;

@interface CADisplay : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableModes;	// G=0x334eacfd; 
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x334eabf5; 
@property(readonly, assign, getter=isCloned) BOOL cloned;	// G=0x3355d7e9; 
@property(readonly, assign, getter=isCloningSupported) BOOL cloningSupported;	// G=0x3355d7b9; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x3355d879; S=0x3355d741; 
@property(retain, nonatomic) CADisplayMode *currentMode;	// G=0x334eaa3d; S=0x3355d5f1; 
@property(readonly, assign, nonatomic) NSString *deviceName;	// G=0x3355c559; 
@property(readonly, assign) unsigned displayId;	// G=0x3355c569; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x3355d849; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x334ea215; 
@property(readonly, assign, getter=isOverscanned) BOOL overscanned;	// G=0x3355d819; 
@property(readonly, assign, nonatomic) CADisplayMode *preferredMode;	// G=0x3355d8e1; 
@property(readonly, assign, getter=isSupported) BOOL supported;	// G=0x334eaca1; 
@property(readonly, assign) int tag;	// G=0x334eacd1; 
+ (id)TVOutDisplay;	// 0x3355d4f1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x334eac9d
+ (id)displays;	// 0x334e71b5
+ (id)mainDisplay;	// 0x3355d505
- (id)_initWithDisplay:(Display *)display;	// 0x334ea1c9
- (void)_invalidate;	// 0x3355c545
- (void)_update;	// 0x334ea225
// declared property getter: - (id)availableModes;	// 0x334eacfd
// declared property getter: - (CGRect)bounds;	// 0x334eabf5
// declared property getter: - (id)colorMode;	// 0x3355d879
// declared property getter: - (id)currentMode;	// 0x334eaa3d
- (id)description;	// 0x3355c8a9
// declared property getter: - (id)deviceName;	// 0x3355c559
// declared property getter: - (unsigned)displayId;	// 0x3355c569
// declared property getter: - (BOOL)isCloned;	// 0x3355d7e9
// declared property getter: - (BOOL)isCloningSupported;	// 0x3355d7b9
// declared property getter: - (BOOL)isExternal;	// 0x3355d849
// declared property getter: - (BOOL)isOverscanned;	// 0x3355d819
// declared property getter: - (BOOL)isSupported;	// 0x334eaca1
// declared property getter: - (id)name;	// 0x334ea215
// declared property getter: - (id)preferredMode;	// 0x3355d8e1
// declared property setter: - (void)setColorMode:(id)mode;	// 0x3355d741
// declared property setter: - (void)setCurrentMode:(id)mode;	// 0x3355d5f1
// declared property getter: - (int)tag;	// 0x334eacd1
@end

