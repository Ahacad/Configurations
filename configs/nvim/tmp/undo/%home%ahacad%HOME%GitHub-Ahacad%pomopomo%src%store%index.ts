Vim�UnDo� �w���@V��L9ZV)0�Lκ��ñ�g��t   J                                   ai��    _�                              ����                                                                                                                                                                                                                                                                                                                            8                       V        ai��     �                 <<<<<<< HEAD   &// adapt to previous version of stores   3if (loadedState.data.finishedTasks === undefined) {   &  loadedState.data.finishedTasks = [];   }   ,for (const task of loadedState.data.tasks) {     task.finished = false;   }   4for (const task of loadedState.data.finishedTasks) {     task.finished = true;   }   0if (loadedState.data.nextTaskId === undefined) {   "  loadedState.data.nextTaskId = 0;   .  for (const task of loadedState.data.tasks) {   +    loadedState.data.nextTaskId = Math.max(   "      loadedState.data.nextTaskId,         task.id       );     }   6  for (const task of loadedState.data.finishedTasks) {   +    loadedState.data.nextTaskId = Math.max(   "      loadedState.data.nextTaskId,         task.id       );   =======5��                          (      �              5�_�                     &        ����                                                                                                                                                                                                                                                                                                                                                    V        ai��    �       H   H   E   0import {configureStore} from '@reduxjs/toolkit';       (import clockReducer from './clockSlice';   *import configReducer from './configSlice';   &import dataReducer from './dataSlice';       3type RootState = ReturnType<typeof store.getState>;        export const loadState = () => {   	    try {   >        const serializedState = localStorage.getItem('state');           if (!serializedState)               return undefined;           else   /            return JSON.parse(serializedState);       } catch (err) {           return undefined;       }   };   0export const saveState = (state: RootState) => {   	    try {   6        const serializedState = JSON.stringify(state);   7        localStorage.setItem('state', serializedState);       } catch (err) {           console.log(err);       }   };        const loadedState = loadState();   if (loadedState != undefined) {       // stop running pomodoro   +    loadedState.clock.clockRunning = false;       *    // adapt to previous version of stores   7    if (loadedState.data.finishedTasks === undefined) {   ,        loadedState.data.finishedTasks = [];       }   0    for (const task of loadedState.data.tasks) {           task.finished = false;       }   8    for (const task of loadedState.data.finishedTasks) {           task.finished = true;       }   4    if (loadedState.data.nextTaskId === undefined) {   (        loadedState.data.nextTaskId = 0;   4        for (const task of loadedState.data.tasks) {   )            loadedState.data.nextTaskId =   ?                Math.max(loadedState.data.nextTaskId, task.id);   	        }   <        for (const task of loadedState.data.finishedTasks) {   )            loadedState.data.nextTaskId =   ?                Math.max(loadedState.data.nextTaskId, task.id);   	        }       }   }       console.log(loadedState);       const store = configureStore({       reducer: {           data: dataReducer,           clock: clockReducer,           config: configReducer,       },        preloadedState: loadedState,   });       store.subscribe(() => {        saveState(store.getState());�   G            �   F   H            saveState(store.getState());�   E   G          store.subscribe(() => {�   D   F           �   C   E          });�   B   D            preloadedState: loadedState,�   A   C            },�   @   B              config: configReducer,�   ?   A              clock: clockReducer,�   >   @              data: dataReducer,�   =   ?            reducer: {�   <   >          const store = configureStore({�   ;   =           �   :   <          console.log(loadedState);�   9   ;           �   8   :          }�   7   9            }�   6   8              }�   5   7                );�   4   6                  task.id�   3   5          $        loadedState.data.nextTaskId,�   2   4          -      loadedState.data.nextTaskId = Math.max(�   1   3          8    for (const task of loadedState.data.finishedTasks) {�   0   2              }�   /   1                );�   .   0                  task.id�   -   /          $        loadedState.data.nextTaskId,�   ,   .          -      loadedState.data.nextTaskId = Math.max(�   +   -          0    for (const task of loadedState.data.tasks) {�   *   ,          $    loadedState.data.nextTaskId = 0;�   )   +          2  if (loadedState.data.nextTaskId === undefined) {�   (   *            }�   '   )              task.finished = true;�   &   (          6  for (const task of loadedState.data.finishedTasks) {�   %   '            }�   $   &              task.finished = false;�   #   %          .  for (const task of loadedState.data.tasks) {�   "   $            }�   !   #          (    loadedState.data.finishedTasks = [];�       "          5  if (loadedState.data.finishedTasks === undefined) {�      !          (  // adapt to previous version of stores�                  �                )  loadedState.clock.clockRunning = false;�                  // stop running pomodoro�                if (loadedState != undefined) {�                 const loadedState = loadState();�                 �                };�                  }�                    console.log(err);�                  } catch (err) {�                3    localStorage.setItem("state", serializedState);�                2    const serializedState = JSON.stringify(state);�                  try {�                0export const saveState = (state: RootState) => {�                };�                  }�                    return undefined;�                  } catch (err) {�                ,    else return JSON.parse(serializedState);�                +    if (!serializedState) return undefined;�   
             :    const serializedState = localStorage.getItem("state");�   	               try {�      
           export const loadState = () => {�      	           �                3type RootState = ReturnType<typeof store.getState>;�                 �                &import dataReducer from "./dataSlice";�                *import configReducer from "./configSlice";�                (import clockReducer from "./clockSlice";�                 �                 2import { configureStore } from "@reduxjs/toolkit";�   G   H          });       export default store;�   %   &          >>>>>>> master5��    %                      �                     �    G                      �                     �                2       0           2       0       �                           1                       �               (       (   2       (       (       �               *       *   [       *       *       �               &       &   �       &       &       �                           �                       �               3       3   �       3       3       �                           �                       �                           �                       �    	                  	                	       �    
           :       >         :       >       �               +          M      +              �               ,          k      ,              �                         �                    �                      /   �             /       �                         �                    �                         �                    �               0          �      0              �                         �                    �               2       0   �      2       0       �               3       	   .      3       	       �                      6   8             6       �                      7   o             7       �                         �                    �                         �                    �                          �                     �                          �                     �                          �                     �                          �                     �               )                 )              �                                                �               (       +   =      (       +       �                5           i      5               �    !           (       *   j      (       *       �    "                  7   �             7       �    #           .       ,   �      .       ,       �    $                     �                    �    %                  0                 0       �    &           6          1      6              �    '                     P                    �    (                  8   V             8       �    )           2          �      2              �    *           $          �      $              �    +           0       4   �      0       4       �    ,           -       (   �      -       (       �    -           $       4         $       4       �    .                  )   F             )       �    /                  ?   p             ?       �    0                  	   �             	       �    1           8       <   �      8       <       �    2           -       )   �      -       )       �    3           $       ?   !      $       ?       �    4                  	   a             	       �    5                     k                    �    6                     q                    �    7                      s                     �    8                     t                    �    9                       �                      �    :                     �                    �    ;                      �                     �    <                     �                    �    =                     �                    �    >                     �                    �    ?                                         �    @                                           �    A                     <                    �    B                      @                     �    C                     A                    �    D                       Y                      �    E                     z                    �    F                      ~                     �    G                                           �            E       G               z      �      5��