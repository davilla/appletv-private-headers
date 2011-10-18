/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, EDWorkbook;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject {
@private
	EDWorkbook *mWorkbook;	// 4 = 0x4
	NSMutableArray *mProcessors;	// 8 = 0x8
}
- (id)initWithWorkbook:(id)workbook;	// 0x351fed31
- (void)addProcessorClass:(Class)aClass;	// 0x351feead
- (void)applyProcessorsWithSheet:(id)sheet;	// 0x3521d355
- (void)dealloc;	// 0x3523709d
- (bool)hasProcessors;	// 0x35377dcd
- (void)markObject:(id)object processor:(Class)processor;	// 0x35213bd1
- (void)removeAllObjects;	// 0x351fee8d
- (void)removeProcessorClass:(Class)aClass;	// 0x35377d31
@end

