/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"
#import "OfficeImport-Structs.h"

@class OADTextListStyle, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PDPresentation : OCDDocument {
@private
	NSMutableArray *mSlideMasters;	// 20 = 0x14
	NSMutableArray *mNotesMasters;	// 24 = 0x18
	NSMutableArray *mSlides;	// 28 = 0x1c
	NSMutableArray *mBulletBlips;	// 32 = 0x20
	CGSize mSlideSize;	// 36 = 0x24
	CGSize mNotesSize;	// 44 = 0x2c
	BOOL mIsAutoPlay;	// 52 = 0x34
	BOOL mIsCommentsVisible;	// 53 = 0x35
	BOOL mIsLooping;	// 54 = 0x36
	BOOL mIsKiosk;	// 55 = 0x37
	NSMutableDictionary *mCommentAuthors;	// 56 = 0x38
	OADTextListStyle *mDefaultTextStyle;	// 60 = 0x3c
}
@property(assign) BOOL isAutoPlay;	// G=0x31289099; S=0x3100841d; converted property
@property(assign) BOOL isCommentsVisible;	// G=0x312890a9; S=0x3101b6b1; converted property
@property(assign) BOOL isKiosk;	// G=0x312890c9; S=0x311ae8c1; converted property
@property(assign) BOOL isLooping;	// G=0x312890b9; S=0x31138869; converted property
@property(assign) CGSize notesSize;	// G=0x31289081; S=0x3101b69d; converted property
@property(assign) CGSize slideSize;	// G=0x31075b09; S=0x3101b689; converted property
- (id)init;	// 0x31006ddd
- (id).cxx_construct;	// 0x31006dd9
- (unsigned long)addBulletBlip:(id)blip;	// 0x311b2c9d
- (void)addNotesMaster:(id)master;	// 0x3115e4d5
- (void)addSlide:(id)slide;	// 0x31288ff1
- (void)addSlideMaster:(id)master;	// 0x310211a9
- (id)bulletBlipAtIndex:(long)index;	// 0x31289061
- (unsigned long)bulletBlipCount;	// 0x311b2cd9
- (id)bulletBlips;	// 0x31138635
- (id)commentAuthorForId:(unsigned)anId;	// 0x312890d9
- (void)dealloc;	// 0x3108d7f9
- (id)defaultTextStyle;	// 0x31017355
- (void)flushUnusedMastersAndLayouts;	// 0x31289121
- (unsigned)indexOfSlide:(id)slide;	// 0x31289011
// converted property getter: - (BOOL)isAutoPlay;	// 0x31289099
// converted property getter: - (BOOL)isCommentsVisible;	// 0x312890a9
// converted property getter: - (BOOL)isKiosk;	// 0x312890c9
// converted property getter: - (BOOL)isLooping;	// 0x312890b9
- (id)notesMasterAtIndex:(unsigned)index;	// 0x31288f91
- (unsigned)notesMasterCount;	// 0x31288f71
// converted property getter: - (CGSize)notesSize;	// 0x31289081
- (void)setCommentAuthor:(id)author forId:(unsigned)anId;	// 0x311b4739
// converted property setter: - (void)setIsAutoPlay:(BOOL)play;	// 0x3100841d
// converted property setter: - (void)setIsCommentsVisible:(BOOL)visible;	// 0x3101b6b1
// converted property setter: - (void)setIsKiosk:(BOOL)kiosk;	// 0x311ae8c1
// converted property setter: - (void)setIsLooping:(BOOL)looping;	// 0x31138869
// converted property setter: - (void)setNotesSize:(CGSize)size;	// 0x3101b69d
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x3101b689
- (id)slideAtIndex:(unsigned)index;	// 0x31288fd1
- (unsigned)slideCount;	// 0x31288fb1
- (id)slideMasterAtIndex:(unsigned)index;	// 0x31288f51
- (unsigned)slideMasterCount;	// 0x31288f31
// converted property getter: - (CGSize)slideSize;	// 0x31075b09
@end
