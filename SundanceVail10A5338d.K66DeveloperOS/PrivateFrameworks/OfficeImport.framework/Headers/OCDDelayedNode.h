/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@protocol OCDDelayedNodeContext;

@interface OCDDelayedNode : NSObject {
	id<OCDDelayedNodeContext> mDelayedContext;	// 4 = 0x4
	bool mLoaded;	// 8 = 0x8
}
@property(retain) id delayedContext;	// G=0x33bb5bf9; S=0x3396cba1; converted property
@property(assign, getter=isLoaded) bool loaded;	// G=0x339d37a9; S=0x33a0b1b9; converted property
- (void)dealloc;	// 0x339dec7d
// converted property getter: - (id)delayedContext;	// 0x33bb5bf9
// converted property getter: - (bool)isLoaded;	// 0x339d37a9
- (bool)load;	// 0x339ce321
// converted property setter: - (void)setDelayedContext:(id)context;	// 0x3396cba1
// converted property setter: - (void)setLoaded:(bool)loaded;	// 0x33a0b1b9
@end

