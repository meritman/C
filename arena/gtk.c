#include <gtk/gtk.h>

int count = 0;

void on_button_clicked(GtkWidget *widget, gpointer label) {
    count++;
    char buffer[50];
    snprintf(buffer, sizeof(buffer), "Button clicked %d times", count);
    gtk_label_set_text(GTK_LABEL(label), buffer);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Click Counter");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    GtkWidget *label = gtk_label_new("Button clicked 0 times");
    gtk_box_pack_start(GTK_BOX(vbox), label, TRUE, TRUE, 0);

    GtkWidget *button = gtk_button_new_with_label("Click Me!");
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), label);
    gtk_box_pack_start(GTK_BOX(vbox), button, TRUE, TRUE, 0);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}