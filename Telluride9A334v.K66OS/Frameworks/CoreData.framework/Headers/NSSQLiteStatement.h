/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLStatement.h"
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface NSSQLiteStatement : NSSQLStatement {
@private
	sqlite3_stmt *_cachedSQLiteStatement;	// 24 = 0x18
}
@property(assign) sqlite3_stmt *cachedSQLiteStatement;	// G=0x31e48ea5; S=0x31f12201; converted property
// converted property getter: - (sqlite3_stmt *)cachedSQLiteStatement;	// 0x31e48ea5
- (void)clearCaches;	// 0x31e4aed9
- (void)dealloc;	// 0x31e4af41
- (void)finalize;	// 0x31f12229
// converted property setter: - (void)setCachedSQLiteStatement:(sqlite3_stmt *)statement;	// 0x31f12201
@end
