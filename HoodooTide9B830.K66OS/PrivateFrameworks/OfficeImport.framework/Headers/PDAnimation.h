/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDTimeListNodeList, TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface PDAnimation : NSObject {
@private
	PDTimeListNodeList *mTimeListNodeList;	// 4 = 0x4
	TSUNoCopyDictionary *mBuildMap;	// 8 = 0x8
}
@property(retain) id buildMap;	// G=0x312fb669; S=0x312fc921; converted property
+ (void)initialize;	// 0x311a35fd
- (id)init;	// 0x310ecf75
- (id)addTimeListNodeList;	// 0x312fc961
// converted property getter: - (id)buildMap;	// 0x312fb669
- (void)dealloc;	// 0x3117090d
// converted property setter: - (void)setBuildMap:(id)map;	// 0x312fc921
- (id)timeListNodeList;	// 0x312fb659
@end

