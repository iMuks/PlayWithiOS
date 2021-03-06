//
//  AppDelegate.h
//  PlayWithiOS
//
//  Created by Anand Kumar on 7/4/15.
//  Copyright (c) 2015 Anand Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;


// First commit
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

