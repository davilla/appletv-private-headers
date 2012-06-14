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
@property(assign) sqlite3_stmt *cachedSQLiteStatement;	// G=0x362323dd; S=0x362fe0f1; converted property
// converted property getter: - (sqlite3_stmt *)cachedSQLiteStatement;	// 0x362323dd
- (void)clearCaches;	// 0x3623430d
- (void)dealloc;	// 0x36234375
- (void)finalize;	// 0x362fe119
// converted property setter: - (void)setCachedSQLiteStatement:(sqlite3_stmt *)statement;	// 0x362fe0f1
@end
