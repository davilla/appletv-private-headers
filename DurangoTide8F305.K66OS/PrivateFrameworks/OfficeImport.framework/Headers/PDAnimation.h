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
@property(retain) id buildMap;	// G=0x345cb2b9; S=0x344cb8a9; converted property
+ (void)initialize;	// 0x3456e15d
- (id)init;	// 0x34439fcd
- (id)addTimeListNodeList;	// 0x344cb7e9
// converted property getter: - (id)buildMap;	// 0x345cb2b9
- (void)dealloc;	// 0x3445de09
// converted property setter: - (void)setBuildMap:(id)map;	// 0x344cb8a9
- (id)timeListNodeList;	// 0x344cb861
@end

