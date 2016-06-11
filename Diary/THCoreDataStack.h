//
//  THCoreDataStack.h
//  Diary
//
//  Created by Joey Chang on 6/11/16.
//  Copyright (c) 2014 joey. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface THCoreDataStack : NSObject

+ (instancetype)defaultStack;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
