/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPDFPage, UIImage, UIPDFPageRenderOperation;

@interface UIPDFPageRenderJob : NSObject {
	UIPDFPage *_page;	// 4 = 0x4
	unsigned _pageIndex;	// 8 = 0x8
	CGSize _size;	// 12 = 0xc
	int _priority;	// 20 = 0x14
	UIImage *_image;	// 24 = 0x18
	UIPDFPageRenderOperation *_operation;	// 28 = 0x1c
	id _target;	// 32 = 0x20
	SEL _callback;	// 36 = 0x24
	id _userData;	// 40 = 0x28
	BOOL _sendPending;	// 44 = 0x2c
	BOOL _releaseWhenDone;	// 45 = 0x2d
	int _lock;	// 48 = 0x30
}
@property(readonly, assign) UIImage *image;	// G=0x34d31795; @dynamic
@property(assign) UIPDFPageRenderOperation *operation;	// G=0x34d3171d; S=0x34d316e9; @dynamic
@property(readonly, assign) unsigned pageIndex;	// G=0x34d31f85; @synthesize=_pageIndex
@property(readonly, assign) int priority;	// G=0x34d31f99; @synthesize=_priority
@property(assign) BOOL releaseWhenDone;	// G=0x34d31fad; S=0x34d31fc5; @synthesize=_releaseWhenDone
- (id)initWithPage:(id)page maxSize:(CGSize)size queuePriority:(int)priority;	// 0x34d30d91
- (void)cancel;	// 0x34d30f35
- (void)cancelOperation;	// 0x34d31145
- (void)cancelOperationForTarget:(id)target;	// 0x34d31331
- (void)dealloc;	// 0x34d30ea9
- (BOOL)hasPage;	// 0x34d30d59
// declared property getter: - (id)image;	// 0x34d31795
// declared property getter: - (id)operation;	// 0x34d3171d
// declared property getter: - (unsigned)pageIndex;	// 0x34d31f85
// declared property getter: - (int)priority;	// 0x34d31f99
- (void)releaseOperation;	// 0x34d31751
// declared property getter: - (BOOL)releaseWhenDone;	// 0x34d31fad
- (void)renderImage;	// 0x34d317c9
- (void)sendImage;	// 0x34d31ba1
- (void)sendImageTo:(id)to callback:(SEL)callback userData:(id)data;	// 0x34d31d65
// declared property setter: - (void)setOperation:(id)operation;	// 0x34d316e9
// declared property setter: - (void)setReleaseWhenDone:(BOOL)done;	// 0x34d31fc5
- (void)setTarget:(id)target callback:(SEL)callback userData:(id)data;	// 0x34d31541
@end

