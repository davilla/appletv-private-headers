/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject {
@private
	EDWorkbook *mWorkbook;	// 4 = 0x4
	NSMutableArray *mProcessors;	// 8 = 0x8
}
- (id)initWithWorkbook:(id)workbook;	// 0x344b4241
- (void)addProcessorClass:(Class)aClass;	// 0x343a218d
- (void)applyProcessorsWithSheet:(id)sheet;	// 0x343bd865
- (void)dealloc;	// 0x343c8bb1
- (bool)hasProcessors;	// 0x345abaa1
- (void)markObject:(id)object processor:(Class)processor;	// 0x343a4ad9
- (void)removeAllObjects;	// 0x343a216d
- (void)removeProcessorClass:(Class)aClass;	// 0x345aba15
@end

