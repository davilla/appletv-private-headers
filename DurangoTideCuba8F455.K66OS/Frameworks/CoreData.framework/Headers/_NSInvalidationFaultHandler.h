/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSFaultHandler.h"


__attribute__((visibility("hidden")))
@interface _NSInvalidationFaultHandler : NSFaultHandler {
}
+ (id)defaultHandler;	// 0x33e602a1
- (id)fulfillAggregateFaultForObject:(id)object andRelationship:(id)relationship withContext:(id)context;	// 0x33e87e41
- (void)fulfillFault:(id)fault withContext:(id)context;	// 0x33e87ebd
- (void)turnObject:(id)object intoFaultWithContext:(id)context;	// 0x33e87e25
@end

